struct Justifier : Controller {
  void enter();
  uint2 data();
  void latch(bool data);
  void serialize(serializer& s);
  Justifier(bool port, bool chained);

//private:
  const bool chained;  //true if the second justifier is attached to the first
  bool latched;
  unsigned counter;

  bool active;
  struct Player {
    signed x, y;
    bool trigger, start;
  } player1, player2;
};
