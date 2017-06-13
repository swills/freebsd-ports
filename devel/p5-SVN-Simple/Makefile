# Created by: Autrijus Tang <autrijus@autrijus.org>
# $FreeBSD: head/devel/p5-SVN-Simple/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	SVN-Simple
PORTVERSION=	0.28
PORTREVISION=	3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple interface to SVN::Delta::Editor

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-subversion>=0:devel/p5-subversion
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

BROKEN_powerpc=	Does not configure

.include <bsd.port.mk>
