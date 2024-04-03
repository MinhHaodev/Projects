#include <stdio.h>
#include <conio.h>

#pragma pack(1) // Tr�nh b? l�m tr�n b? nh?.
// Khai b�o c?u tr�c d? li?u sinh vi�n.
struct SinhVien
{
	char MaSo[30];
	float DiemToan, DiemLy, DiemHoa;
};
typedef struct SinhVien SINHVIEN; // �?i "struct SinhVien" th�nh "SINHVIEN"

void NhapDuLieu(SINHVIEN &);
void XuatSinhVien(SINHVIEN);
float TinhDiemTrungBinh(SINHVIEN);

// H�m nh?p d? li?u sinh vi�n.
void NhapDuLieu(SINHVIEN &x) // Ch� �: Ph?i c� &: Tham chi?u.
{
	fflush(stdin); // X�a b? nh? d?m.
	printf("
Nhap vao ho ten: ");
	gets(x.MaSo);

	// Nh?p di?m to�n.
	do{
		printf("
Nhap vao diem toan: ");
		scanf("%f", &x.DiemToan);

		if(x.DiemToan < 0 || x.DiemToan > 10)
		{
			printf("
Diem toan khong hop le. Xin kiem tra lai !");
		}
	}while(x.DiemToan < 0 || x.DiemToan > 10);

	// Nh?p di?m l�.
	do{
		printf("
Nhap vao diem ly: ");
		scanf("%f", &x.DiemLy);

		if(x.DiemLy < 0 || x.DiemLy > 10)
		{
			printf("
Diem ly khong hop le. Xin kiem tra lai !");
		}
	}while(x.DiemLy < 0 || x.DiemLy > 10);

	// Nh?p di?m h�a.
	do{
		printf("
Nhap vao diem hoa: ");
		scanf("%f", &x.DiemHoa);

		if(x.DiemHoa < 0 || x.DiemHoa > 10)
		{
			printf("
Diem hoa khong hop le. Xin kiem tra lai !");
		}
	}
         while(x.DiemHoa < 0 || x.DiemHoa > 10);
}

// H�m xu?t sinh vi�n.
void XuatSinhVien(SINHVIEN x)
{
	printf("
Ma so: %s", x.MaSo);
	printf("
Diem toan: %f", x.DiemToan);
	printf("
Diem ly: %f", x.DiemLy);
	printf("
Diem hoa: %f", x.DiemHoa);
	printf("
Diem trung binh la: %f", TinhDiemTrungBinh(x));
}

// T�nh di?m trung b�nh c?a sinh vi�n.
float TinhDiemTrungBinh(SINHVIEN x)
{
	return (x.DiemToan + x.DiemLy + x.DiemHoa) / 3;
}

void main()
{
	SINHVIEN x;
	NhapDuLieu(x);
	XuatSinhVien(x);
	printf("
sizeof = %d", sizeof(x));
	getch();
}
