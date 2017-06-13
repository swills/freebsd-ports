# $FreeBSD: head/devel/p5-Module-Install-AuthorRequires/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Module-Install-AuthorRequires
PORTVERSION=	0.02
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to declare author-only dependencies

RUN_DEPENDS=	\
	p5-Module-Install>0:devel/p5-Module-Install
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
