# Created by: Rong-En Fan <rafan@infor.org>
# $FreeBSD: head/devel/p5-IO-Pager/Makefile 440889 2017-05-14 18:53:17Z sunpoet $

PORTNAME=	IO-Pager
PORTVERSION=	0.39
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Select a pager, optionally pipe it output if destination is a TTY

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-File-Which>=0:sysutils/p5-File-Which
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5 tar:tgz

.include <bsd.port.mk>
