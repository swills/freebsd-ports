# $FreeBSD$

PORTNAME=	premailer
PORTVERSION=	1.7.9
CATEGORIES=	mail rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	17

MAINTAINER=	idefix@fechner.net
COMMENT=	Improve the rendering of HTML emails

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-css_parser>=1.1.9:textproc/rubygem-css_parser \
		rubygem-htmlentities>=4.0.0:textproc/rubygem-htmlentities

PORTSCOUT=	limit:^1\.7
CONFLICTS_INSTALL=	rubygem-premailer

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

PLIST_FILES=	bin/premailer

.include <bsd.port.mk>
