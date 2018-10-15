# Created by: TAKAHASHI Kaoru <kaoru@kaisei.org>
# $FreeBSD: head/www/p5-LWP-UserAgent-WithCache/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	LWP-UserAgent-WithCache
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	LWP::UserAgent extension with local cache

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Cache-Cache>=0:devel/p5-Cache-Cache \
		p5-File-HomeDir>=0:devel/p5-File-HomeDir \
		p5-libwww>=0:www/p5-libwww

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
