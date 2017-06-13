# $FreeBSD: head/textproc/rubygem-amatch/Makefile 441594 2017-05-24 13:04:04Z sunpoet $

PORTNAME=	amatch
PORTVERSION=	0.3.1
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby library for approximate string matching and searching

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	rubygem-tins>=1.0:devel/rubygem-tins

USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/agrep.rb

.include <bsd.port.mk>
