#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(){
 int sock0;

 /*通信についての方法や種類を記述するアドレス構造体を宣言*/
 struct sockaddr_in addr;
 struct sockaddr_in client;

 int len;
 int sock;

 /* ソケット作成
  * AF_INET : IPv4 インターネットプロトコル
  * SOCK_STREAM : 順序性と信頼性のあるバイトストリーム（TCP）
  * ソケットのよって利用するプロトコルの種類を指定　今回は1つなので0
  * 返り値としてソケットのファイルディスクリプタを返す
  * エラーの場合は-1
  * */
 sock0 = socket(AF_INET, SOCK_STREAM, 0);

 /* ソケットの設定 アドレス構造体 */
 addr.sin_family = AF_INET;
 addr.sin_port = htons(12345);
 addr.sin_addr.s_addr = INADDR_ANY;

 /*生成したソケットに対してアドレス構造体の情報を与える
  * ➝ 他のプロセスがソケットを認識することができる */
 bind(sock0, (struct sockaddr *)&addr, sizeof(addr));

 /* TCPクライアントからの接続要求を待てる状態にする */
 listen(sock0, 5);

 /* TCPクライアントからの接続要求を受け付ける */
 len = sizeof(client);
 sock = accept(sock0, (struct sockaddr *)&client, &len);

 /* 文字送信 */
 write(sock, "HELLO,ISC", 9);

 /* TCPセッションの終了 */
 close(sock);

 /* listen するsocketの終了 */
 close(sock0);

 return 0;
}
