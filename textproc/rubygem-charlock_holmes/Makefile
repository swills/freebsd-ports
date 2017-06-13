# $FreeBSD: head/textproc/rubygem-charlock_holmes/Makefile 426525 2016-11-19 18:21:20Z jbeich $

PORTNAME=	charlock_holmes
PORTVERSION=	0.7.3
PORTREVISION=	5
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Gems for character encoding detection

LIB_DEPENDS=	libicui18n.so:devel/icu

USE_RUBY=	yes
USES=		gem
CONFIGURE_ARGS=	--with-icu-include=${LOCALBASE}/include

.include <bsd.port.mk>
