# Created by: Kubilay Kocak <koobs@FreeBSD.org>
# $FreeBSD: head/dns/py-idna/Makefile 463698 2018-03-06 08:33:07Z amdmi3 $

PORTNAME=	idna
PORTVERSION=	2.5
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
