# Created by: Antoine Brodin <antoine@FreeBSD.org>
# $FreeBSD: head/security/py-dfdatetime/Makefile 455371 2017-12-02 13:37:07Z antoine $

PORTNAME=	dfdatetime
PORTVERSION=	20171109
CATEGORIES=	security devel python
MASTER_SITES=	CHEESESHOP \
		https://github.com/log2timeline/dfdatetime/releases/download/${PORTVERSION}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	antoine@FreeBSD.org
COMMENT=	Digital Forensics Date and Time

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>0:devel/py-mock@${FLAVOR}

NO_ARCH=	yes
USES=		python
USE_PYTHON=	distutils autoplist

do-test:
	@(cd ${TEST_WRKSRC} && ${SETENV} ${TEST_ENV} ${PYTHON_CMD} run_tests.py)

.include <bsd.port.mk>
