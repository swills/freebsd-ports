# $FreeBSD: head/multimedia/rubygem-paperclip-av-transcoder-rails50/Makefile 447386 2017-08-05 03:25:17Z jrm $

PORTNAME=	paperclip-av-transcoder
PORTVERSION=	0.6.4
CATEGORIES=	multimedia rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Audio/Video transcoder for Paperclip using FFMPEG/Avconv

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-av>=0.9.0:multimedia/rubygem-av \
		rubygem-paperclip-rails50>=2.5.2:devel/rubygem-paperclip-rails50

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
