# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/net/fpc-pcap/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	net lang
PKGNAMESUFFIX=	-pcap

COMMENT=	Free Pascal unit for libpcap library

USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
