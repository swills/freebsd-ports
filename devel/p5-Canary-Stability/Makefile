# $FreeBSD: head/devel/p5-Canary-Stability/Makefile 473172 2018-06-24 01:06:40Z adamw $

PORTNAME=	Canary-Stability
PORTVERSION=	2012
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MLEHMANN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Checks what version of perl you're running and then complains about it

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

USES=		perl5
USE_PERL5=	configure

OPTIONS_DEFINE=	ACTIVATE
ACTIVATE_DESC=	Enable Canary::Stability functionality

# Install an empty stub
post-patch-ACTIVATE-off:
	${CP} ${FILESDIR}/Stability.pm ${WRKSRC}

.include <bsd.port.mk>
