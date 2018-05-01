# Created by: Bruce Simpson
# $FreeBSD: head/net-mgmt/py-pyang/Makefile 468163 2018-04-24 00:26:05Z bofh $

PORTNAME=	pyang
PORTVERSION=	1.7.4
CATEGORIES=	net-mgmt python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Validator and code generator for YANG (RFC 4741)

LICENSE=	MIT

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

DATADIR=	${PREFIX}/share/yang

post-patch:
	@${REINPLACE_CMD} -e \
		's|share/man|man|' ${WRKSRC}/setup.py

.include <bsd.port.mk>
