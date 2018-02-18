# $FreeBSD: head/sysutils/py-uptime/Makefile 462227 2018-02-18 13:20:29Z antoine $

PORTNAME=	uptime
PORTVERSION=	3.0.1
CATEGORIES=	sysutils python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	uros@gruber.si
COMMENT=	Cross-platform uptime library

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING.txt

USES=		python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/uptime/_posix.so

.include <bsd.port.mk>
