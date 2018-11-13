# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/databases/fpc-gdbm/Makefile 484696 2018-11-11 15:38:50Z danfe $

PORTREVISION=	1
CATEGORIES=	databases lang
PKGNAMESUFFIX=	-gdbm

COMMENT=	Free Pascal interface to the GNU database system

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	GDBM
GDBM_DESC=	Install the GNU database manager
OPTIONS_DEFAULT=	GDBM

GDBM_LIB_DEPENDS=	libgdbm.so:databases/gdbm

.include "${MASTERDIR}/Makefile"
