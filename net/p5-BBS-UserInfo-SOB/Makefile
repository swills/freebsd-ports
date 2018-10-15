# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/net/p5-BBS-UserInfo-SOB/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	BBS-UserInfo-SOB
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GSLIN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Get user information of SOB-style BBS

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Expect>=0:lang/p5-Expect

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
