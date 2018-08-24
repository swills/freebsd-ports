# Created by: aaron@FreeBSD.org
# $FreeBSD: head/devel/p5-Log-Message/Makefile 477559 2018-08-19 09:08:07Z amdmi3 $

PORTNAME=	Log-Message
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Powerful and flexible message logging mechanism

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Params-Check>=0:devel/p5-Params-Check \
		p5-Module-Load>=0:devel/p5-Module-Load \
		p5-Locale-Maketext-Simple>=0:devel/p5-Locale-Maketext-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
