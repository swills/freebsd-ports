# Created by: Mikolaj Golub <trociny@FreeBSD.org>
# $FreeBSD: head/databases/py-python-swiftclient/Makefile 495183 2019-03-09 18:02:47Z trociny $

PORTNAME=	python-swiftclient
PORTVERSION=	3.7.0
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	trociny@FreeBSD.org
COMMENT=	Python client library for OpenStack Object Storage (Swift)

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pbr>=0.5.21:devel/py-pbr@${PY_FLAVOR}

RUN_DEPENDS:=	${BUILD_DEPENDS}
RUN_DEPENDS+=	${PY_FUTURES} \
		${PYTHON_PKGNAMEPREFIX}six>=1.9.0:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>=1.1:www/py-requests@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

post-install:
	${INSTALL_MAN} ${WRKSRC}/doc/manpages/swift.1 \
	    ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
