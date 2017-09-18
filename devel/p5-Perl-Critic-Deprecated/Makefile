# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/p5-Perl-Critic-Deprecated/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Perl-Critic-Deprecated
PORTVERSION=	1.119
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Policies that are no longer included with Perl::Critic

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Perl-Critic>=0:textproc/p5-Perl-Critic
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
