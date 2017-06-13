# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/net/py-matrix-synapse-ldap3/Makefile 438448 2017-04-13 14:51:31Z feld $

PORTNAME=	matrix-synapse-ldap3
PORTVERSION=	0.1.2
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	feld@FreeBSD.org
COMMENT=	LDAP3 auth provider for Matrix Synapse

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}ldap3>0:net/py-ldap3

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
