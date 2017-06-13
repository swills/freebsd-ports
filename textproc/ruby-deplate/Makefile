# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/textproc/ruby-deplate/Makefile 406285 2016-01-17 07:06:25Z swills $

PORTNAME=	deplate
PORTVERSION=	0.8.5
CATEGORIES=	textproc ruby
MASTER_SITES=	SF
PKGNAMEPREFIX=	${RUBY_PKGNAMEPREFIX}
DIST_SUBDIR=	ruby

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby tool for converting wiki-like markup

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE.TXT

BROKEN_RUBY22=	yes
BROKEN_RUBY23=	yes

NO_ARCH=	yes
USES=		zip
USE_RUBY=	yes
USE_RUBY_SETUP=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}

post-build:
	${RM} -r ${WRKSRC}/lib/deplate/themes/navbar-right.html

.include <bsd.port.mk>
