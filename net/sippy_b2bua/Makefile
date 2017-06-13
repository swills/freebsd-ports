# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/net/sippy_b2bua/Makefile 442878 2017-06-07 19:11:59Z sunpoet $

PORTNAME=	sippy_b2bua
PORTVERSION=	1.0.2
PORTREVISION=	2
CATEGORIES=	net python
MASTER_SITES=	http://www.b2bua.org/chrome/site/
DISTNAME=	sippy-${PORTVERSION}

MAINTAINER=	sobomax@FreeBSD.org
COMMENT=	SIP Back-to-back user agent (B2BUA) server with Radius support

NO_ARCH=	yes
USE_PYTHON=	distutils
USES=		python twisted
PYDISTUTILS_PKGNAME=	sippy
DOCSDIR=	${PREFIX}/share/doc/${PYDISTUTILS_PKGNAME}

DOCS=		COPYING README

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} ${DOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
