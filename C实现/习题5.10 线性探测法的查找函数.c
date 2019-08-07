Position Find( HashTable H, ElementType Key )
{
    Position CurrentPos , NewPos;
    int Cnum = 0;

    NewPos = CurrentPos = Hash(Key, H->TableSize);
    while(H->Cells[NewPos].Info != Empty && H->Cells[NewPos].Data != Key && Cnum < H->TableSize)
    {
        NewPos = Hash(NewPos + 1, H->TableSize) ;
        Cnum++;
    }
    if(H->Cells[NewPos].Data == Key || H->Cells[NewPos].Info == Empty)
    {
        return NewPos;
    }
    else
        return ERROR;
}