# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/www/fpc-fastcgi/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	www lang
PKGNAMESUFFIX=	-fastcgi

COMMENT=	Free Pascal fastcgi unit

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
