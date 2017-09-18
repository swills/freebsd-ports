# Created by: adamw
# $FreeBSD: head/devel/p5-Term-ProgressBar-Simple/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Term-ProgressBar-Simple
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simpler Term::ProgressBar interface

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Term-ProgressBar-Quiet>=0:devel/p5-Term-ProgressBar-Quiet
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
