# $FreeBSD: head/www/gitlab-pages/Makefile 468171 2018-04-24 01:01:37Z swills $

PORTNAME=	gitlab-pages
PORTVERSION=	0.8.1
CATEGORIES=	www

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Official GitLab Pages daemon

#BROKEN=		does currently not compile

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	go:lang/go

USE_GITLAB=	yes
GL_ACCOUNT=	gitlab-org
# Find the here: https://gitlab.com/gitlab-org/gitlab-pages/tags
GL_COMMIT=	b77d61283dfbadf3f50933a48b214d3607cacc47

FETCH_DEPENDS=	go:lang/go \
		git>0:devel/git
PLIST_FILES=	bin/gitlab-pages

USE_RC_SUBR=	gitlab_pages

USERS=		gitlab-pages
GROUPS=		gitlab-pages

GMAKE=		yes

post-fetch:
	GOPATH=${WRKDIR}/.GOPATH go get -v -u github.com/FiloSottile/gvt
	cd ${WRKDIR}/.GOPATH && GOPATH=${WRKDIR}/.GOPATH bin/gvt fetch golang.org/x/tools/cmd/goimports
	cd ${WRKDIR}/.GOPATH && GOPATH=${WRKDIR}/.GOPATH bin/gvt fetch github.com/wadey/gocovmerge
	cd ${WRKDIR}/.GOPATH && GOPATH=${WRKDIR}/.GOPATH bin/gvt fetch github.com/golang/lint/golint
	cd ${WRKDIR}/.GOPATH && GOPATH=${WRKDIR}/.GOPATH bin/gvt fetch github.com/fzipp/gocyclo

post-patch:
	@${MV} ${WRKSRC}/vendor ${WRKSRC}/src
	@${MKDIR} ${WRKSRC}/src/gitlab.com/gitlab-org
	@${LN} -s ${WRKSRC} ${WRKSRC}/src/gitlab.com/gitlab-org/gitlab-pages

do-build:
	${GMAKE}
	cd ${WRKSRC} && ${SETENV} GOCACHE=${WRKSRC}/go CGO_ENABLED=0 GO15VENDOREXPERIMENT=1 \
		GOPATH=${WRKSRC} GOCACHE=off \
		go build -o gitlab-pages \
		--ldflags="-X main.VERSION=${PORTVERSION} -X main.REVISION=${GL_COMMIT}"

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/gitlab-pages ${STAGEDIR}${PREFIX}/bin/gitlab-pages

.include <bsd.port.mk>
