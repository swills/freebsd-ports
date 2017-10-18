# $FreeBSD: head/textproc/rubygem-charlock_holmes/Makefile 451874 2017-10-12 13:08:11Z jrm $

PORTNAME=	charlock_holmes
DISTVERSION=	0.7.5
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Gems for character encoding detection

LICENSE=	MIT

LIB_DEPENDS=	libicui18n.so:devel/icu \
		libunwind.so:devel/libunwind

USES=		gem
USE_RUBY=	yes

CONFIGURE_ARGS=	--with-icu-include=${LOCALBASE}/include

.include <bsd.port.mk>
