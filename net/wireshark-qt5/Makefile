# $FreeBSD: head/net/wireshark-qt5/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTREVISION=	2

MASTERDIR=	${.CURDIR}/../wireshark
COMMENT=	Powerful network analyzer/capture tool (QT package)

CONFLICTS=	wireshark-[0-9]*

OPTIONS_EXCLUDE=	GTK2 GTK3
OPTIONS_DEFAULT=	SNMP ADNS KRB_BASE QT5

.include "${MASTERDIR}/Makefile"
