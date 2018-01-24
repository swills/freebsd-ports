# Created by: ijliao
# $FreeBSD: head/security/py-openssl/Makefile 459657 2018-01-22 15:09:11Z sbz $

PORTNAME=	openssl
PORTVERSION=	17.5.0
PORTREVISION=	1
CATEGORIES=	security python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pyOpenSSL-${PORTVERSION}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Python interface to the OpenSSL library

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cryptography>=2.1.4:security/py-cryptography@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.5.2:devel/py-six@${FLAVOR}

OPTIONS_DEFINE=	EXAMPLES

USES=		cpe python
USE_PYTHON=	autoplist concurrent distutils pythonprefix

CPE_VENDOR=	jean-paul_calderone
CPE_PRODUCT=	py${PORTNAME}

PORTEXAMPLES=	*

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

do-test:
	@(cd ${WRKSRC} && ${PYTHON_CMD} ${PYSETUP} test)

.include <bsd.port.mk>
