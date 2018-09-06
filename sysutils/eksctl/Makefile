# Created by: Danilo Egea Gondolfo <danilo@FreeBSD.org>
# $FreeBSD: head/sysutils/eksctl/Makefile 478811 2018-09-02 17:41:41Z danilo $

PORTNAME=	eksctl
PORTVERSION=	0.1.1
CATEGORIES=	sysutils

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	CLI for Amazon EKS

LICENSE=	APACHE20

RUN_DEPENDS=	kubectl:sysutils/kubectl \
		aws-iam-authenticator:security/aws-iam-authenticator

PORTSCOUT=	limit:^[0-9\.]*$$

USES=		go

USE_GITHUB=	yes
GH_ACCOUNT=	weaveworks

PLIST_FILES=	bin/${PORTNAME}

GO_PKGNAME=	github.com/weaveworks/${PORTNAME}
GO_TARGET=	${GO_PKGNAME}/cmd/${PORTNAME}
GO_BUILDFLAGS=	-ldflags="-X main.gitCommit=${PORTVERSION}"

.include <bsd.port.mk>
