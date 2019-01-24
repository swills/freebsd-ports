# Created by: Danilo Egea Gondolfo <danilo@FreeBSD.org>
# $FreeBSD: head/sysutils/eksctl/Makefile 490764 2019-01-19 22:19:35Z danilo $

PORTNAME=	eksctl
PORTVERSION=	0.1.19
CATEGORIES=	sysutils

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	CLI for Amazon EKS

LICENSE=	APACHE20

RUN_DEPENDS=	kubectl:sysutils/kubectl \
		aws-iam-authenticator:security/aws-iam-authenticator

USES=		go

PORTSCOUT=	limit:^[0-9\.]*$$

USE_GITHUB=	yes
GH_ACCOUNT=	weaveworks

PLIST_FILES=	bin/${PORTNAME}

GO_PKGNAME=	github.com/weaveworks/${PORTNAME}
GO_TARGET=	${GO_PKGNAME}/cmd/${PORTNAME}
GO_BUILDFLAGS=	-ldflags="-X github.com/weaveworks/eksctl/pkg/version.gitCommit=${PORTVERSION} \
		-X github.com/weaveworks/eksctl/pkg/version.builtAt=$$(date +'%s')"

.include <bsd.port.mk>
