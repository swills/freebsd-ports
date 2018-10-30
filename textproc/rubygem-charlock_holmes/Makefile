# $FreeBSD: head/textproc/rubygem-charlock_holmes/Makefile 482830 2018-10-23 11:35:03Z jbeich $

PORTNAME=	charlock_holmes
DISTVERSION=	0.7.6
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Gems for character encoding detection

LICENSE=	MIT

LIB_DEPENDS=	libicui18n.so:devel/icu

USES=		gem
USE_RUBY=	yes

CONFIGURE_ARGS=	--with-icu-include=${LOCALBASE}/include

.include <bsd.port.mk>
