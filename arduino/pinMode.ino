void setup(){
    int x;//номер порта 
    char y[6];//его режим(INPUT или OUTPUT)
    //INPUT - принимает сигнал 
    //OUTPUT - генерирует сигнал
    pinMode(x,y)//режим порта /  определяет что делает порт , принимает или генерирует сигнал
    //обычно вызывается один раз (в в функции setup) 
    //пример :
    pinMode(10,OUTPUT);
}
void loop(){

}