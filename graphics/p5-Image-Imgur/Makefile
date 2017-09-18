# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/graphics/p5-Image-Imgur/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Image-Imgur
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl extension for uploading images to http://imgur.com

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Moose>=0:devel/p5-Moose \
		p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5 tar:tgz

.include <bsd.port.mk>
