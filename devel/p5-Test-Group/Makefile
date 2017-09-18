# $FreeBSD: head/devel/p5-Test-Group/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Test-Group
PORTVERSION=	0.20
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Group together related tests in a test suite

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-File-Slurp>0:devel/p5-File-Slurp \
		p5-Test-Cmd>=0:devel/p5-Test-Cmd
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
