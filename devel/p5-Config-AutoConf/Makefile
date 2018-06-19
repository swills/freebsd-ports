# Created by: Wen Heping <wen@FreeBSD.org>
# $FreeBSD: head/devel/p5-Config-AutoConf/Makefile 472584 2018-06-17 01:51:56Z wen $

PORTNAME=	Config-AutoConf
PORTVERSION=	0.317
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to implement some of AutoConf macros

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Capture-Tiny>=0:devel/p5-Capture-Tiny
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
