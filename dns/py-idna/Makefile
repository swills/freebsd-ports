# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/dns/py-idna/Makefile 465057 2018-03-20 02:32:39Z koobs $

PORTNAME=	idna
PORTVERSION=	2.6
CATEGORIES=	dns python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	koobs@FreeBSD.org
COMMENT=	Internationalized Domain Names in Applications (IDNA)

LICENSE=	BSD3CLAUSE PSFL
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENSE.rst

USES=		python	# Actually, 2.6-2.7,3.3-3.6
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
