# Created by: milki <milki@rescomp.berkeley.edu>
# $FreeBSD: head/devel/p5-POE-Component-Hailo/Makefile 486189 2018-11-29 16:45:22Z sunpoet $

PORTNAME=	POE-Component-Hailo
PORTVERSION=	0.10
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:HINRIK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Non-blocking wrapper around Hailo

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Hailo>=0:textproc/p5-Hailo \
		p5-POE>=0:devel/p5-POE

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

.include <bsd.port.mk>
