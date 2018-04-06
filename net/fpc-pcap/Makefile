# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/net/fpc-pcap/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	net lang
PKGNAMESUFFIX=	-pcap

COMMENT=	Free Pascal unit for libpcap library

USES=		fpc
USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
