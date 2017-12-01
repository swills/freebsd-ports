# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/dns/py-idna/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	idna
PORTVERSION=	2.5
CATEGORIES=	dns python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Internationalized Domain Names in Applications (IDNA)

USES=		python	# Actually, 2.6-2.7,3.3-3.6
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
