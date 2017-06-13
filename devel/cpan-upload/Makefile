# Created by: Lars Thegler <lars@thegler.dk>
# $FreeBSD: head/devel/cpan-upload/Makefile 437950 2017-04-07 18:50:22Z lth $

PORTNAME=	cpan-upload
PORTVERSION=	2.2
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:NEILB/scripts

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Script for uploading distributions to CPAN

RUN_DEPENDS=	p5-AppConfig-Std>=1.05:devel/p5-AppConfig-Std \
		p5-Term-ReadKey>=0:devel/p5-Term-ReadKey \
		p5-libwww>=0:www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
