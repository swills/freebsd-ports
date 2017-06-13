# Created by: Maksym Sobolyev <sobomax@FreeBSD.org>
# $FreeBSD: head/math/py-cdecimal/Makefile 407123 2016-01-24 13:56:00Z amdmi3 $

PORTNAME=	cdecimal
PORTVERSION=	2.3
PORTREVISION=	1
CATEGORIES=	math
MASTER_SITES=	http://www.bytereef.org/software/mpdecimal/releases/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fast drop-in replacement for the Decimal module

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USES=		python
USE_PYTHON=	distutils autoplist

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/cdecimal.so

.include <bsd.port.mk>
