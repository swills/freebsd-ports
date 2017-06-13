# $FreeBSD: head/net/wireshark-qt5/Makefile 415742 2016-05-23 20:35:01Z amdmi3 $

MASTERDIR=	${.CURDIR}/../wireshark
COMMENT=	Powerful network analyzer/capture tool (QT package)

CONFLICTS=	wireshark-[0-9]*

OPTIONS_EXCLUDE=	GTK2 GTK3
OPTIONS_DEFAULT=	SNMP ADNS GEOIP KRB_BASE QT5

.include "${MASTERDIR}/Makefile"
