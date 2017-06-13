# $FreeBSD: head/textproc/p5-Perl-Critic-More/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Perl-Critic-More
PORTVERSION=	1.003
CATEGORIES=	textproc devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Supplemental policies for Perl::Critic

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Perl-Critic>=0:textproc/p5-Perl-Critic
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild
NO_ARCH=	yes

.include <bsd.port.mk>
