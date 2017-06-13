# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/www/p5-POE-Component-Client-UserAgent/Makefile 430114 2016-12-31 13:34:16Z sunpoet $

PORTNAME=	POE-Component-Client-UserAgent
PORTVERSION=	0.08
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:RCAPUTO
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	LWP and LWP::Parallel based POE component

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-POE>=0:devel/p5-POE \
		p5-ParallelUserAgent>=0:www/p5-ParallelUserAgent
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
