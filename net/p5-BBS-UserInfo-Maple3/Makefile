# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/net/p5-BBS-UserInfo-Maple3/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	BBS-UserInfo-Maple3
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:GSLIN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Get user information of Maple3-style BBS

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Expect>=0:lang/p5-Expect
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
