# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/devel/py-asttokens/Makefile 459455 2018-01-19 18:31:35Z amdmi3 $

PORTNAME=	asttokens
PORTVERSION=	1.1.8
CATEGORIES=	devel
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Annotate AST trees with source code positions

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}astroid>0:devel/py-astroid@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
