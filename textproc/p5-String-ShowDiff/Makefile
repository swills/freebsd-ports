# Created by: Mathieu Arnold <m@absolight.net>
# $FreeBSD: head/textproc/p5-String-ShowDiff/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	String-ShowDiff
PORTVERSION=	0.03
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to help visualize differences between strings

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Algorithm-Diff>=0:devel/p5-Algorithm-Diff
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
