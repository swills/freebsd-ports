# Created by: Mons Anderson <mons@cpan.org>
# $FreeBSD: head/devel/p5-Object-Event/Makefile 450015 2017-09-17 18:00:23Z sunpoet $

PORTNAME=	Object-Event
PORTVERSION=	1.220
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:C/0$//}

MAINTAINER=	mons@cpan.org
COMMENT=	Class that provides an event callback interface

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-AnyEvent>=3.5:devel/p5-AnyEvent \
		p5-common-sense>=0:devel/p5-common-sense
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
