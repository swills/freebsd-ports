# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: head/www/trac-xmlrpc/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	xmlrpc
PORTVERSION=	1.1.2.r${SVN_REV}
PORTREVISION=	1
CATEGORIES=	www devel python
MASTER_SITES=	http://www.sourcehosting.net/freebsd/distfiles/
PKGNAMEPREFIX=	trac-
DISTNAME=	${PORTNAME}plugin-r${SVN_REV}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Provides an XML-RPC interface to Trac

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	tracd:www/trac

SVN_REV=	13203

WRKSRC=		${WRKDIR}/${PORTNAME}plugin/trunk
FETCH_BEFORE_ARGS=	-o ${DISTFILES}

USES=		python:2 zip
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
