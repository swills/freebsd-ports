# Created by: Lars Balker Rasmussen <lbr@FreeBSD.org>
# $FreeBSD: head/devel/p5-Algorithm-Merge/Makefile 494919 2019-03-07 09:00:56Z amdmi3 $

PORTNAME=	Algorithm-Merge
PORTVERSION=	0.08
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Three-way merge and diff

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Algorithm-Diff>=1.15:devel/p5-Algorithm-Diff

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
